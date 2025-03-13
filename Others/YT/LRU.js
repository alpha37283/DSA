class LRU {
    constructor(capacity){
        this.capacity = capacity;
        this.map = new Map();
        this.head = head;
        this.tail = tail;
        this.length = 0;

    }
    #removeNode(node){
        // if there is a prev of node
        if(node.prev)
        {
            node.prev.next = node.next; 
        }
        

        // if there is a next of node
        if(node.next)
        {
            node.next.prev = node.prev;
        }

        // if the node is itself a head
        if(node === this.head)
        {
            this.head = node.next;
        }

        // if the node is itself a tail
        if(node = this.tail)
        {
            this.tail = node.prev;
        }

    }
    get(key){

    }

    put(key, value){
        // Case: if the capacity is full
        if(this.length === this.capacity)
        {
            if(!(this.map.has(key))) // and the key is not already exist
            {
                // remove the tail
                // and add a new node at the end

            }
        }



        // Case: if the key already exist
        if(this.map.has(key))
        {
            this.#removeNode(this.map.get(key));
        }

        // creating a node
        const node = {
            next : this.head,
            prev : null,
            value,
        }
        this.head = node;

        this.map.set(key, node);
        this.length += 1;
    }
}


// solution

/**
 
we can use an array to store the hash(key , value)
but in that case lookup will be O(n) where n is if larger in case of Worst case, we will have problem

we can use LL
- in that case the operation to 
get(key) will be O(n)
put(key, value) will also be of O(n)

steps:
# put(key, value)

if LL is empty, simply create a new node
if not empty, place the new Node at the end 
if full return
if already exist 
    - remove the existing node from LL and Hash
    - create a new node at the end


# get(key)

if(!exist)
- return not exist
else 
- nd = new Node();
// tail would be LRU node 

nd -> next = head;
tail -> next = head; 
temp = head->next->next === NULL;

 */