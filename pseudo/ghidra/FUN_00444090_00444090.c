// FUN_00444090  00444090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00444090(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005fc360();
  switch(uVar2) {
  case 2:
    FUN_00441c70();
    DAT_007906f8 = 1;
    break;
  case 3:
    (**(code **)(*param_1 + 4))(3);
    FUN_00441d80();
    if (DAT_007906f8 == 2) {
      (**(code **)(*DAT_0162ee84 + 0x80))
                (0x18aa9,0,0,10,0,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x80);
      DAT_007906f8 = 0;
    }
    if (DAT_007906f8 == 1) {
      DAT_007906f8 = 2;
      cVar1 = FUN_00444ac0();
      if (cVar1 == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))(0x18aa7,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
      (**(code **)(*DAT_0162ee84 + 0x80))
                (0x18aa8,0,0,10,0,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x84);
    }
    if (DAT_007906f8 == 0) {
      cVar1 = FUN_005f4570(0x18aa9);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))
                  (0x18aa9,0,0,10,0,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x80);
      }
      cVar1 = FUN_005f4570(0x18aa8);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))
                  (0x18aa8,0,0,10,0,0x3f800000,_DAT_006b3654,DAT_007906ec + 0x84);
      }
    }
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 4:
    FUN_00609870(*(undefined4 *)(DAT_007906ec + 0x80),1);
    *(undefined4 *)(DAT_007906ec + 0x80) = 0;
    FUN_00609870(*(undefined4 *)(DAT_007906ec + 0x84),1);
    *(undefined4 *)(DAT_007906ec + 0x84) = 0;
    (**(code **)(*param_1 + 4))(5);
    if (*(char *)(DAT_007906f0 + 0x264) == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00442490();
    }
    break;
  case 5:
    FUN_004433d0();
    break;
  case 6:
    FUN_00444ce0();
  }
  return;
}

