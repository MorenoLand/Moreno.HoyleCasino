// FUN_00657bd0  00657bd0

int __fastcall FUN_00657bd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_006651e0(0);
  iVar2 = FUN_00675e40(*(undefined4 *)(param_1 + 0x278),uVar1);
  if (iVar2 % 0xc == 0) {
    iVar2 = iVar2 / 0xc;
  }
  else {
    iVar2 = iVar2 / 0xc + 1;
  }
  return iVar2;
}

