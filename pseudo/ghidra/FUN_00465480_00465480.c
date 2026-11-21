// FUN_00465480  00465480

void __fastcall FUN_00465480(int param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x20); local_8 = local_8 + 1) {
    uVar1 = FUN_0060ca40(0);
    FUN_0060c890(uVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

