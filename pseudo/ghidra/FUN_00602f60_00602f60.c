// FUN_00602f60  00602f60

void __fastcall FUN_00602f60(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00602ed0();
  if (cVar1 == '\0') {
    switch(param_1[0x65]) {
    case 0:
      (**(code **)(*param_1 + 0xb0))(param_1[0x66]);
      if (param_1[100] != 0) {
        FUN_005ecd00(param_1[0x72],0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      }
      break;
    case 1:
      (**(code **)(*param_1 + 0xb0))(param_1[0x67]);
      if (param_1[100] != 0) {
        FUN_005ecd00(param_1[0x75],0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      }
      break;
    case 2:
      (**(code **)(*param_1 + 0xb0))(param_1[0x68]);
      if (param_1[100] != 0) {
        FUN_005ecd00(param_1[0x74],0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      }
      break;
    case 3:
      (**(code **)(*param_1 + 0xb0))(param_1[0x69]);
      if (param_1[100] != 0) {
        FUN_005ecd00(param_1[0x75],0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      }
    }
  }
  return;
}

