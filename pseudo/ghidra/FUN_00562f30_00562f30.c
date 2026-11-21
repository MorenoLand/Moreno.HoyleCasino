// FUN_00562f30  00562f30

undefined4 __fastcall FUN_00562f30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(&DAT_00743f74 + *(int *)(param_1 + 0x14) * 4);
  }
  else if (iVar1 == 5) {
    uVar2 = *(undefined4 *)(&DAT_00743f4c + *(int *)(param_1 + 0x14) * 4);
  }
  else if (iVar1 == 10) {
    uVar2 = *(undefined4 *)(&DAT_00743f20 + *(int *)(param_1 + 0x14) * 4);
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\vpmdisplay.cpp",0x4cf);
    uVar2 = 0;
  }
  return uVar2;
}

