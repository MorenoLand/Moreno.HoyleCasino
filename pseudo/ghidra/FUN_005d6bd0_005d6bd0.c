// FUN_005d6bd0  005d6bd0

undefined4 __fastcall FUN_005d6bd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = 5000;
  local_1c = 10000;
  local_18 = 50000;
  local_14 = 100000;
  local_10 = 1000000;
  local_c = 100000000;
  local_8 = 1000000000;
  iVar1 = FUN_005d52e0(param_1);
  uStack_24._3_1_ = *(char *)(iVar1 + 0x2a);
  if (uStack_24._3_1_ == '\a') {
    uVar2 = 100000000;
  }
  else {
    iVar1 = FUN_005d52e0(param_1);
    uStack_24._2_1_ = *(char *)(iVar1 + 0x2a);
    if (uStack_24._2_1_ == '\0') {
      uVar2 = 0x9c4;
    }
    else {
      iVar1 = FUN_005d52e0(param_1);
      uStack_24._1_1_ = *(char *)(iVar1 + 0x2a);
      uVar2 = (&uStack_24)[*(char *)(iVar1 + 0x2a)];
    }
  }
  return uVar2;
}

