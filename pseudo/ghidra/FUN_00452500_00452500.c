// FUN_00452500  00452500

short __thiscall FUN_00452500(int param_1,undefined4 param_2)

{
  char cVar1;
  short local_28;
  undefined2 local_24 [2];
  short local_20;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14 [2];
  ushort local_10;
  undefined2 local_c;
  short local_8;
  
  local_8 = 0;
  local_20 = 0;
  local_24[0] = 0;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_0044efd0(param_2);
  local_c = FUN_004520c0();
  local_10 = 0;
  while (local_10 < 2) {
    switch(local_c) {
    case 0:
      local_8 = FUN_00453d30(local_24,local_14);
      break;
    case 1:
      local_8 = FUN_00453d70(local_24,local_14);
      local_8 = local_8 + 1;
      break;
    case 2:
      local_8 = FUN_00453e00(local_24,local_14);
      local_8 = local_8 + 2;
      break;
    case 3:
      local_8 = FUN_00454200(local_24,local_14);
      local_8 = local_8 + 4;
      break;
    case 4:
      local_8 = FUN_00454250(local_24,local_14);
      local_8 = local_8 + 5;
      break;
    case 5:
      local_8 = FUN_004543a0(local_24,local_14);
      local_8 = local_8 + 9;
      break;
    case 6:
      local_8 = FUN_004543f0(local_24,local_14);
      local_8 = local_8 + 10;
      break;
    case 7:
      local_8 = FUN_00454440(local_24,local_14);
      local_8 = local_8 + 0xb;
      break;
    case 8:
      local_8 = FUN_00454560(local_24,local_14);
      local_8 = local_8 + 0xe;
      break;
    case 9:
      local_8 = FUN_00454960(local_24,local_14);
      local_8 = local_8 + 0x11;
      break;
    case 10:
      local_8 = FUN_00454d60(local_24,local_14);
      local_8 = local_8 + 0x16;
      break;
    case 0xb:
      local_8 = FUN_00455060(local_24,local_14);
      local_8 = local_8 + 0x1b;
      break;
    case 0xc:
      local_8 = FUN_00455740(local_24,local_14);
      local_8 = local_8 + 0x20;
      break;
    case 0xd:
      local_8 = FUN_004558f0(local_24,local_14);
      local_8 = local_8 + 0x22;
      break;
    case 0xe:
      local_8 = FUN_004559c0(local_24,local_14);
      local_8 = local_8 + 0x26;
      break;
    case 0xf:
      local_8 = FUN_00455ac0(local_24,local_14);
      local_8 = local_8 + 0x2a;
      break;
    case 0x10:
      local_8 = FUN_00455cb0(local_24,local_14);
      local_8 = local_8 + 0x2e;
      break;
    case 0x11:
      local_8 = FUN_00456000(local_24,local_14);
      local_8 = local_8 + 0x32;
      break;
    case 0x12:
      local_8 = FUN_00456020(local_24,local_14);
      local_8 = local_8 + 0x33;
      break;
    case 0x13:
      local_8 = FUN_004560e0(local_24,local_14);
      local_8 = local_8 + 0x35;
      break;
    case 0x14:
      local_8 = FUN_00456420(local_24,local_14);
      local_8 = local_8 + 0x3c;
      break;
    case 0x15:
      local_8 = FUN_004567c0(local_24,local_14);
      local_8 = local_8 + 0x3e;
      break;
    case 0x16:
      local_8 = FUN_00456890(local_24,local_14);
      local_8 = local_8 + 0x40;
      break;
    case 0x17:
      local_8 = FUN_00456920(local_24,local_14);
      local_8 = local_8 + 0x41;
      break;
    case 0x18:
      local_8 = FUN_00456b30(local_24,local_14);
      local_8 = local_8 + 0x43;
      break;
    case 0x19:
      local_8 = FUN_00456ca0(local_24,local_14);
      local_8 = local_8 + 0x45;
      break;
    case 0x1a:
      local_8 = FUN_00456e10(local_24,local_14);
      local_8 = local_8 + 0x47;
      break;
    case 0x1b:
      local_8 = FUN_00456e50(local_24,local_14);
      local_8 = local_8 + 0x48;
      break;
    default:
      local_8 = -1;
    }
    if ((*(int *)(param_1 + 0x31c) < 5) || (local_10 != 0)) break;
    local_20 = local_8;
    for (local_28 = 0; local_28 < 7; local_28 = local_28 + 1) {
      *(undefined4 *)(param_1 + 0x2d8 + local_28 * 4) =
           *(undefined4 *)(param_1 + 0x300 + local_28 * 4);
    }
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 800);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x324);
    local_1c = local_24[0];
    local_18 = local_14[0];
    local_10 = 1;
  }
  if ((4 < *(int *)(param_1 + 0x31c)) &&
     (cVar1 = FUN_00456f70(local_24[0],local_14[0],local_1c,local_18), cVar1 == '\0')) {
    local_8 = local_20;
  }
  return local_8;
}

