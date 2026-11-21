// FUN_0040a040  0040a040

void * __thiscall FUN_0040a040(void *param_1,uint param_2)

{
  FUN_00409870();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

