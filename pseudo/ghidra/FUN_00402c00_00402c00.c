// FUN_00402c00  00402c00

undefined4 __fastcall FUN_00402c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004081c0(*(undefined4 *)(param_1 + 0xae0));
  if (iVar1 == 0) {
    uVar2 = 0x311288;
  }
  else if (iVar1 == 1) {
    uVar2 = 0x311287;
  }
  else if (iVar1 == 2) {
    uVar2 = 0x311289;
  }
  else {
    uVar2 = 0x311286;
  }
  return uVar2;
}

