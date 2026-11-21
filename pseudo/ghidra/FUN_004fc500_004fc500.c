// FUN_004fc500  004fc500

undefined4 __fastcall FUN_004fc500(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_18;
  
  cVar2 = FUN_005da7b0();
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar1 = *(int *)(DAT_00791364 + 0xfc);
    iVar4 = FUN_005daec0();
    if (iVar4 < 2) {
      if (2 < iVar1) {
        FUN_00481690();
        FUN_004fcb30(2);
        return 0;
      }
      if ((iVar1 == 2) && (*(int *)(DAT_00791364 + 0x100) < 0x29)) {
        *(undefined4 *)(DAT_00791364 + 0x100) = 0x29;
      }
      else if ((iVar1 < 2) && (*(int *)(DAT_00791364 + 0x100) < 0xd)) {
        *(undefined4 *)(DAT_00791364 + 0x100) = 0xd;
      }
    }
    FUN_00481690();
    if (((*(char *)(DAT_00791364 + 0x409) == '\0') && (*(char *)(DAT_00791364 + 0x40b) == '\0')) &&
       (*(char *)(DAT_00791364 + 0x40a) == '\0')) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    FUN_00519f20(*(undefined4 *)(DAT_00791364 + 0xf4),local_18);
    cVar2 = (**(code **)(*param_1 + 0x2d0))();
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

