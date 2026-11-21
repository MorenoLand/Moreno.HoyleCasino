// FUN_00422490  00422490

void * __thiscall FUN_00422490(void *param_1,uint param_2)

{
  FUN_00420c40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

