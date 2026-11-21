// FUN_00689e80  00689e80

void * __thiscall FUN_00689e80(void *param_1,uint param_2)

{
  FUN_00689df0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

