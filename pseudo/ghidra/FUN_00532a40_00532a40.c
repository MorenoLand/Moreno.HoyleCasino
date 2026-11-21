// FUN_00532a40  00532a40

void * __thiscall FUN_00532a40(void *param_1,uint param_2)

{
  FUN_00529e70();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

