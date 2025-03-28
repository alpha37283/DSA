class LRU {
    constructor(capacity){
        this.capacity = capacity;
        this.map = new Map(); // HashMap for O(1) lookup
        this.head = null; // Initialize head
        this.tail = null; // Initialize tail
        this.length = 0; // Track length
    }

    #removeNode(node){
        if (!node) return;

        if (node.prev) {
            node.prev.next = node.next; 
        }

        if (node.next) {
            node.next.prev = node.prev;
        }

        if (node === this.head) {
            this.head = node.next;
            // i think this should be added
            // node.next.prev = null;
        }

        if (node === this.tail) {
            this.tail = node.prev;
            // and this as well 
            // node.prev.next = null;
        }
    }

    get(key){
        if (!this.map.has(key)) {
            return -1;  // Return -1 if key is not found
        }

        const node = this.map.get(key);

        this.#removeNode(node);

        node.prev = null;
        node.next = this.head;

        if (this.head !== null) {
            this.head.prev = node;  
        }

        this.head = node;

        if (!this.tail) {
            this.tail = node;
        }

        return node.value;
    }

    put(key, value){
        if (this.map.has(key)) {
            this.#removeNode(this.map.get(key));
        } else if (this.length === this.capacity) {
            this.map.delete(this.tail.key);
            this.#removeNode(this.tail);
            this.length -= 1;
        }

        const node = { key, value, next: this.head, prev: null };

        if (this.head !== null) {
            this.head.prev = node;
        }

        this.head = node;

        if (this.tail === null) {
            this.tail = node;
        }

        this.map.set(key, node);
        this.length += 1;
    }

    debug() {
        let current = this.head;
        const arr = [];

        while (current !== null) {
            arr.push(`(${current.key}: ${current.value})`);
            current = current.next;
        }

        console.log("LRU Cache:", arr.join(" -> "));
    }
}
