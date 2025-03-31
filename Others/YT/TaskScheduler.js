class TaskScheduler{
    addTask(){

    }
}


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