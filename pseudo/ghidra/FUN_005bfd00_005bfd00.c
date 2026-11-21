// FUN_005bfd00  005bfd00

void * __thiscall FUN_005bfd00(void *param_1,uint param_2)

{
  FUN_005bf3d0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

