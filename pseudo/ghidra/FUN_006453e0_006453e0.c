// FUN_006453e0  006453e0

void * __thiscall FUN_006453e0(void *param_1,uint param_2)

{
  FUN_00642e50();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

