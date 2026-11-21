// FUN_00694a90  00694a90

void FUN_00694a90(void *param_1)

{
  if (*(int *)((int)param_1 + 0x30) != 0) {
    FUN_006949c0(param_1);
    free(param_1);
  }
  return;
}

