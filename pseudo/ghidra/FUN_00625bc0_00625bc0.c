// FUN_00625bc0  00625bc0

void * __thiscall FUN_00625bc0(void *param_1,uint param_2)

{
  FUN_006252f0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

