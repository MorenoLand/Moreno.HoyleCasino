// FUN_0043d410  0043d410

void __thiscall
FUN_0043d410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    local_c = param_2;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      local_20[local_8] = 0;
      switch(local_8) {
      case 0:
        local_c = param_2;
        break;
      case 1:
        local_c = param_3;
        break;
      case 2:
        local_c = param_4;
        break;
      case 3:
        local_c = param_5;
        break;
      case 4:
        local_c = param_6;
      }
      uVar2 = FUN_0043d9b0(local_c);
      local_20[local_8] = uVar2;
    }
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),local_20[0],*(undefined4 *)(param_1 + 0x1bc),
                 local_20[1],*(undefined4 *)(param_1 + 0x1c0),local_20[2],
                 *(undefined4 *)(param_1 + 0x1c4),local_20[3],*(undefined4 *)(param_1 + 0x1c8),
                 local_10,*(undefined4 *)(param_1 + 0x1cc),0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(5,0);
  }
  return;
}

