


map<tick, list<pair<task, interval>>> interval_2_task_;

uint_64_t tick_;

void AdoTick(interval, task) { 
     inteval_2_task_[tick_ + interval].push(pair<interval, task>)
}

void Run() {
    while(1) {
        auto front = interval_2_task_.pop();

        sleep(front.first - tick_);

        tick_ = front.first;

        RunAll(front);

        AddTick(front);
    }
}
