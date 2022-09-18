//para semáforo
sem_t sem;
sem_init(&sem, 0, 1);
sem_wait(&sem);
sem_post(&sem);