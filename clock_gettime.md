## int clock_gettime(clockid_t clk_id, struct timespec *tp);
## clockid_t 表示时间的来源
- CLOCK_REALTIME
系统实时时钟， 系统时间变的话， 也会跟着变， 有跳跃性，可以理解为绝对时间。这是由变量xtime来记录的。系统每次启动时将CMOS上的RTC时间读入xtime，
System-wide realtime clock. Setting this clock requires appropriate privileges.
- CLOCK_MONOTONIC
Clock that cannot be set and represents monotonic time since some unspecified starting point.单调递增时间， 从某个时间点开始，计时， 不会跳跃，可以理解为相对时间，实际上它指的是系统启动以后流逝的时间，这是由变量jiffies来记录的。系统每次启动时jiffies初始化为0，每来一个timer interrupt，jiffies加1，也就是说它代表系统启动后流逝的tick数。jiffies一定是单调递增的，因为时间不够逆嘛！
- CLOCK_PROCESS_CPUTIME_ID High-resolution per-process timer from the CPU.
- CLOCK_THREAD_CPUTIME_ID Thread-specific CPU-time clock.
## 总结
* CLOCK_MONOTONIC这种时钟更加稳定，不受系统时钟的影响。
* 对相对时间敏感,想反映wall clock time 就使用CLOCK_MONOTONIC
* 对绝对时间比较敏感, 就使用 CLOCK_REALTIME

