// FUN_0043d7a0  0043d7a0

void __thiscall FUN_0043d7a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int local_1c [4];
  int local_c;
  int local_8;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    local_1c[3] = param_2;
    local_c = *(int *)(param_1 + 0x184) * 10000;
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      local_1c[local_8] = 0;
      if (local_8 == 0) {
        local_1c[3] = param_2;
      }
      else if (local_8 == 1) {
        local_1c[3] = param_3;
      }
      else if (local_8 == 2) {
        local_1c[3] = param_4;
      }
      switch(local_1c[3]) {
      case 0:
        local_1c[local_8] = local_c + 0x24a52;
        break;
      case 1:
        local_1c[local_8] = local_c + 0x24a51;
        break;
      case 2:
        local_1c[local_8] = local_c + 0x24a50;
        break;
      case 3:
        local_1c[local_8] = local_c + 0x24a4f;
        break;
      case 4:
        local_1c[local_8] = local_c + 0x24a4e;
        break;
      default:
        FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\horseracingannouncer.cpp",0x178);
      }
    }
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),local_1c[0],*(undefined4 *)(param_1 + 0x1e4),
                 local_1c[1],*(undefined4 *)(param_1 + 0x1e8),local_1c[2],
                 *(undefined4 *)(param_1 + 0x1ec),0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(0x24,0);
  }
  return;
}

