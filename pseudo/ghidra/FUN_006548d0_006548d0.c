// FUN_006548d0  006548d0

void * __thiscall FUN_006548d0(void *param_1,uint param_2)

{
  FUN_00628220();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

