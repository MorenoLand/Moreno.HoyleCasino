// FUN_005652c0  005652c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005652c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005fc360();
  switch(uVar1) {
  case 0:
    FUN_005602a0();
    *(undefined1 *)(DAT_0079343c + 0x18) = 1;
    *(undefined1 *)(DAT_0079343c + 0x19) = 0;
    FUN_005649e0();
    *(undefined4 *)(DAT_00793440 + 0xf8) = 0;
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 1:
    FUN_005624e0(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 8))(1,0);
    break;
  case 3:
    if (*(int *)(DAT_0079343c + 0x14) < 1) {
      (**(code **)(*param_1 + 8))(6,0);
    }
    else {
      FUN_00562010(1);
      FUN_00564b10();
      iVar2 = FUN_0056b910();
      if (0 < iVar2) {
        uVar1 = FUN_005629a0(0,0,10,100,0x3f800000,_DAT_006b3654,DAT_00793440 + 0xf4);
        (**(code **)(*DAT_0162ee84 + 0x80))(uVar1);
      }
      (**(code **)(*param_1 + 8))(4,0);
    }
    break;
  case 4:
    FUN_00564bd0(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 8))(4,0);
    break;
  case 6:
    iVar2 = FUN_0056b910();
    if (0 < iVar2) {
      FUN_005f4510(*(undefined4 *)(DAT_00793440 + 0xf4),1);
    }
    FUN_005696d0();
    *(undefined1 *)(DAT_0079343c + 0x18) = 0;
    if (*(char *)(DAT_0079343c + 0x19) != '\0') {
      FUN_005f4510(*(undefined4 *)(DAT_00793440 + 0xe8),1);
      FUN_005f4510(*(undefined4 *)(DAT_00793440 + 0xec),1);
      (**(code **)(*DAT_0162ee84 + 0x80))
                (0x31225f,0,0,10,1,0x3f800000,_DAT_006b3654,DAT_00793440 + 0xf0);
    }
    FUN_005fc420(0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\vpmdisplay.cpp",0x884);
  }
  return;
}

