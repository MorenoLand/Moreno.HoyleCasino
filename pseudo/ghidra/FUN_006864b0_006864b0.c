// FUN_006864b0  006864b0

void FUN_006864b0(undefined4 *param_1,int param_2)

{
  size_t _NewSize;
  void *pvVar1;
  
  if ((int)param_1[1] <= param_1[2] + param_2) {
    _NewSize = param_1[1] + 0x400 + param_2;
    param_1[1] = _NewSize;
    pvVar1 = realloc((void *)*param_1,_NewSize);
    *param_1 = pvVar1;
  }
  return;
}

