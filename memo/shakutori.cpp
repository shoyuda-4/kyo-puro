int right = 0;     
for (int left = 0; left < n; ++left) {
    while (right < n && (right を 1 個進めたときに条件を満たす)) {
        /* 実際に right を 1 進める */
        // ex: sum += a[right];
        ++right;
    }

    /* break した状態で right は条件を満たす最大なので、何かする */
    // ex: res += (right - left);

    /* left をインクリメントする準備 */
    // ex: if (right == left) ++right;
    // ex: else sum -= a[left];
}
/*
「条件」を満たす区間 (連続する部分列) のうち、最小の長さを求める
「条件」を満たす区間 (連続する部分列) のうち、最大の長さを求める
「条件」を満たす区間 (連続する部分列) を数え上げる
ときに使う
ただし
区間 [left, right) が「条件」を満たすなら、それに含まれる区間も「条件」を満たす
区間 [left, right) が「条件」を満たすなら、それを含む区間も「条件」を満たす
単調増加（減少）
のいずれかを満たすときのみ
*/