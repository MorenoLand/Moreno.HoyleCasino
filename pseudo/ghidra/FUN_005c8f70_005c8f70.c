// FUN_005c8f70  005c8f70

void __fastcall FUN_005c8f70(int param_1)

{
  undefined4 local_8;
  
  FUN_005c9140();
  for (local_8 = 0; local_8 < *(int *)(*(int *)(param_1 + 0x10) + 8); local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0x34) = 0;
  }
  return;
}

