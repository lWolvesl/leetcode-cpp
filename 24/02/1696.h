int maxResult(int *nums, int n, int k) {
    int *dp = (int *) calloc(n, sizeof(int));
    dp[0] = nums[0];
    int *queue = (int *) calloc(n, sizeof(int));
    int head = 0, tail = 0;
    queue[tail++] = 0; // 模拟双端队列
    for (int i = 1; i < n; i++) {
        while (head < tail && queue[head] < i - k) {
            head++;
        }
        dp[i] = dp[queue[head]] + nums[i];
        while (head < tail && dp[queue[tail - 1]] <= dp[i]) {
            tail--;
        }
        queue[tail++] = i;
    }
    int result = dp[n - 1];
    free(queue);
    free(dp);
    return result;
}