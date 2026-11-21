// FUN_0056f1e0  0056f1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056f1e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0056f160();
  if (cVar1 != '\0') {
    uVar2 = FUN_0056f0d0();
    switch(uVar2) {
    case 0:
    case 1:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19269,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      break;
    case 2:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19261,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      break;
    case 3:
    case 4:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19267,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      break;
    case 6:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x1925e,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      break;
    case 7:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x19260,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      break;
    case 8:
      if (*(char *)(param_1 + 0x99) == '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))(0x19268,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
      break;
    case 9:
      (**(code **)(*DAT_0162ee84 + 0x80))(0x1926c,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  return;
}

