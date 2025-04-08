class MyEventEmitter{

    // certain events will have some number of listeners
    // on this event trigger this listener to which it is stored 
    // something like __event_listeners = key as event : array of listeners[()=>{}, ()=>{}]
    constructor()
    {
        this.__events_listeners = {}; 
    }

    on(event, listener)
    {
        if(!(this.__events_listeners[event]))
        {
            this.__events_listeners[event] = [];
        }

        this.__events_listeners[event].push(listener);
        return true;
    }

    emit(event, ...args)
    {
        // if there is no event listener for event return false 
        if(!this.__events_listeners[event])
        {
            console.log('No listener registers for this event!!! ');
            return false;
        }
        // else call each listener crossponding to the event with args

        const listeners = this.__events_listeners[event];
        listeners.forEach((listener) => {
            listener(...args);
        });
    }

    off(event, listener){
        // check if event does not exist
        // return false 

        if(!(this.__events_listeners[event]))
        {
            console.log('No event found to emit listener');
            return false;
        }

        //otherwise find the index of the listener findIndex()
        const indexOfListener = this.__events_listeners[event].indexOf(listener);
        // remove element from that index splice()
        if(indexOfListener < 0)
        {
            console.log('No listener found to off!!!');
            return false;
        }
        this.__events_listeners[event].splice(indexOfListener,1);
    }

    once(event, listener)
    {
        // create a warapper function 
        // call listener(...args)
        // this.off (event, wrapperfn)

        // this.on(event, wrapperfn);
        //return true 
        const wrapperFunc = (...args) => {
            listener(...args);
            this.off(event, wrapperFunc);
        }
    this.on(event, wrapperFunc);
    }


}

const myEvent = new MyEventEmitter();

const sendWhatsApp = (username) => {
    console.log(`${username} is signing up for whatsapp`);
}

myEvent.on("user:signUp", (username) => {console.log(`${username} is signing up for instagrams!!!`)});
myEvent.on("user:signUp", (username) => {console.log(`${username} is singing up for facebook!!!`)});
myEvent.once("user:signUp", sendWhatsApp);


//myEvent.off("user:signUp",sendWhatsApp);

myEvent.emit("user:signUp",'Muneeb Hussain Shah');
console.log('-------------------------------------------');
myEvent.emit("user:signUp",'Ali');

// read the OBSERVABLE DESIGN PATTERN
// dry run the code 



