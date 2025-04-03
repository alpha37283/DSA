class TaskScheduler{
    constructor(concurrency)
    {
        this.concurrency = concurrency;
        this.runningTasks = 0;
        this.waitingQueue = [];
    }

    getNextTask()
    {
        if(this.concurrency > this.runningTasks && length(this.waitingQueue) > 0)
        {
            const nextTask = this.waitingQueue.shift();
            nextTask();
        }
        else
        {
            console.log('No elements in Q or concurrency limit.');
        }

    }
    
    addTask(task){
       return new Promise((resolve, reject)=>{
            async function __taskRunner()
            {
                try{
                    const result = await task();
                    console.log(result);
                    resolve(result);
                    this.runningTasks += 1;
                }
                catch(err){
                    console.log(err);
                    reject(err);
                }
                finally
                {
                    this.runningTask -= 1;
                    this.getNextTask();
                }
            }

            if(this.concurrency > this.runningTasks)
            {
                __taskRunner.call(this);
            }
            else
            {
                this.waitingQueue.push(__taskRunner.bind(this));
            }
       })
    }
}

const scheduler = new TaskScheduler(2);

scheduler.addTask(new Promise((res) => setTimeout(() => res('Task 1'), 5 * 1000)));
scheduler.addTask(new Promise((res) => setTimeout(() => res('Task 2'), 2 * 1000)));
scheduler.addTask(new Promise((res) => setTimeout(() => res('Task 3'), 1 * 1000)));
scheduler.addTask(new Promise((res) => setTimeout(() => res('Task 4'), 5 * 1000)));


// only maxium of LIMIT at can run at a time 
// let say if limit is 2, the only two peralle task can be executed



/**
 * count
 * limit 
 * queue as array 
 * 
 * return a promise
 * in which create taskRunner 
 *          it will help to try catch finally run the task 
 *          run the task if cant push it to queue
 *          if task has ended, finally execute the next task
 * 
 */