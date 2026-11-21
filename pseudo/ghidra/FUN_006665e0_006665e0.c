// FUN_006665e0  006665e0

void __fastcall FUN_006665e0(int *param_1)

{
  int local_8;
  
  if (*param_1 != 0) {
    for (local_8 = 0; local_8 < param_1[1]; local_8 = local_8 + 1) {
      operator_delete(*(void **)(*param_1 + local_8 * 4));
    }
    operator_delete((void *)*param_1);
  }
  return;
}

