// FUN_0060c7d0  0060c7d0

void __thiscall FUN_0060c7d0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    FUN_0060c720();
  }
  memmove((void *)(*(int *)(param_1 + 0xc) + 4),*(void **)(param_1 + 0xc),*(int *)(param_1 + 4) << 2
         );
  **(undefined4 **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

