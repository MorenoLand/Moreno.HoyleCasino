// FUN_00423c90  00423c90

void * __thiscall FUN_00423c90(void *param_1,uint param_2)

{
  FUN_00422540();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

