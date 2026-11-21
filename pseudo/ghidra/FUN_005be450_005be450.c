// FUN_005be450  005be450

void __fastcall FUN_005be450(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

