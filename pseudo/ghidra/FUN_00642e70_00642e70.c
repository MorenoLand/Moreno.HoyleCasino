// FUN_00642e70  00642e70

void __thiscall FUN_00642e70(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x804) = param_2;
  switch(*(undefined4 *)(param_1 + 0x804)) {
  case 0:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 2; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    break;
  case 1:
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 2; local_10 < 0xf; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
    }
    break;
  case 2:
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 1; local_10 < 0xe; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
    }
    break;
  case 3:
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 1; local_10 < 0xe; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
    }
    break;
  case 4:
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 1; local_10 < 0xe; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
    }
    break;
  case 5:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 1; local_10 < 0xe; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    break;
  case 6:
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 1; local_10 < 0xe; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
    }
    break;
  case 7:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 2; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    uVar1 = FUN_00641230(0xf,0);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
    local_8 = local_8 + 1;
    break;
  case 8:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 2; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    uVar1 = FUN_00641230(0xf,1);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
    uVar1 = FUN_00641230(0xf,2);
    *(undefined2 *)(param_1 + 4 + (local_8 + 1) * 2) = uVar1;
    local_8 = local_8 + 2;
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 1; local_10 < 0xb; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    uVar1 = FUN_00641230(0xf,1);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
    local_8 = local_8 + 1;
    break;
  case 0xd:
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
        for (local_10 = 2; local_10 < 0xf; local_10 = local_10 + 1) {
          uVar1 = FUN_00641230(local_10,local_14);
          *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
          local_8 = local_8 + 1;
        }
      }
      uVar1 = FUN_00641230(0xf,1);
      *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
      uVar1 = FUN_00641230(0xf,2);
      *(undefined2 *)(param_1 + 4 + (local_8 + 1) * 2) = uVar1;
      local_8 = local_8 + 2;
    }
    break;
  case 0xe:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 1; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    for (local_10 = 1; local_10 < 0x16; local_10 = local_10 + 1) {
      uVar1 = FUN_00641230(local_10,5);
      *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
      local_8 = local_8 + 1;
    }
    uVar1 = FUN_00641230(1,6);
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
    local_8 = local_8 + 1;
    break;
  case 0xf:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 7; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    break;
  case 0x10:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 7; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        local_8 = local_8 + 1;
      }
    }
    break;
  case 0x11:
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      for (local_10 = 9; local_10 < 0xf; local_10 = local_10 + 1) {
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + local_8 * 2) = uVar1;
        uVar1 = FUN_00641230(local_10,local_14);
        *(undefined2 *)(param_1 + 4 + (local_8 + 1) * 2) = uVar1;
        local_8 = local_8 + 2;
      }
    }
    break;
  default:
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x397);
  }
  *(int *)(param_1 + 0x80c) = local_8;
  FUN_006436a0(*(int *)(param_1 + 0x80c) + -1);
  return;
}

