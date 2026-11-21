// FUN_00663270  00663270

void * __thiscall FUN_00663270(void *param_1,uint param_2)

{
  FUN_006614e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

