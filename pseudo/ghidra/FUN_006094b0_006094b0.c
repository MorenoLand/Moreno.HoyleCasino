// FUN_006094b0  006094b0

size_t FUN_006094b0(void *param_1,int param_2,int param_3,int *param_4)

{
  size_t local_10;
  
  local_10 = param_4[1] - param_4[2];
  if ((uint)(param_3 * param_2) < local_10) {
    local_10 = param_3 * param_2;
  }
  if (local_10 != 0) {
    memcpy(param_1,(void *)(*param_4 + param_4[2]),local_10);
    param_4[2] = param_4[2] + local_10;
  }
  return local_10;
}

