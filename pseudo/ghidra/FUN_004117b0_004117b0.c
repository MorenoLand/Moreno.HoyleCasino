// FUN_004117b0  004117b0

void __thiscall FUN_004117b0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_2 + 4) == '\0') && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) {
    if (*(int *)(param_2 + 0x18) == 4) {
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      switch(iVar2) {
      case 100:
        FUN_005f2a60(0x30d7ec,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(2);
          *(undefined1 *)(param_2 + 4) = 1;
        }
        break;
      case 0x68:
        FUN_005f2a60(0x30d7ea,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(1);
          *(undefined1 *)(param_2 + 4) = 1;
        }
        break;
      case 0x70:
        FUN_005f2a60(0x30d7ed,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(3);
          *(undefined1 *)(param_2 + 4) = 1;
        }
        break;
      case 0x72:
        FUN_005f2a60(0x30d7ee,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(4);
          *(undefined1 *)(param_2 + 4) = 1;
        }
        break;
      case 0x73:
        FUN_005f2a60(0x30d7eb,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(0);
          *(undefined1 *)(param_2 + 4) = 1;
        }
        break;
      case 0x74:
        FUN_005f2a60(0x1391,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          uVar3 = FUN_0040b260(*(undefined4 *)(DAT_00790324 + 0x4d0));
          FUN_00411c20(uVar3);
          *(undefined1 *)(param_2 + 4) = 1;
        }
      }
    }
    FUN_005f72f0(param_2);
  }
  return;
}

