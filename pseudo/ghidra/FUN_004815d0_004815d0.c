// FUN_004815d0  004815d0

void __fastcall FUN_004815d0(int param_1)

{
  int iVar1;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  local_10 = FUN_004f6840();
  local_c = FUN_0047cd90();
  if (local_c != 0) {
    iVar1 = FUN_004c6a70();
    FUN_004c6aa0(iVar1 + local_10);
  }
  local_8 = FUN_00480740();
  (**(code **)(*DAT_00791eb8 + 0x27c))(local_8,local_18);
  *(undefined1 *)(param_1 + 0x409) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  (**(code **)(*DAT_00791eb8 + 0x2d4))();
  return;
}

