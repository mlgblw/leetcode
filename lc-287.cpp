
int findDuplicate(int* nums, int numsSize){
    int p = nums[0],q = nums[0];
    do{
        p = nums[p];//映射关系：用值坐下一个元素的下标
        q = nums[nums[q]];
    }while(p != q);
    int cnt =  0;
    do{
        cnt += 1;
        p = nums[p];
    }while(p != q);
    q = nums[0];p = nums[0];
    while(cnt--)q = nums[q];
    while(p != q){
        p = nums[p];
        q = nums[q];
    }
    return p;
}

int findDuplicate(int* nums, int numsSize){
    int p = nums[0],q = nums[0];
    do{
        p = nums[p];//映射关系：用值坐下一个元素的下标
        q = nums[nums[q]];//二倍速
    }while(p != q);
    q = nums[0];
    while(p != q){
        p = nums[p];
        q = nums[q];
    }
    return p;
}
