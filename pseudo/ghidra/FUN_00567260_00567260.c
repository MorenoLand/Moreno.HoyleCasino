// FUN_00567260  00567260

void FUN_00567260(undefined4 param_1,undefined4 param_2)

{
  if ((DAT_0079343c == 0) || (*(char *)(DAT_0079343c + 0x18) == '\0')) {
    switch(param_1) {
    case 0x312222:
      FUN_00569580(0);
      break;
    case 0x312223:
      FUN_00569580(1);
      break;
    case 0x312224:
      FUN_00569580(2);
      break;
    case 0x312225:
      FUN_00569580(3);
      break;
    case 0x312226:
      FUN_00569580(4);
      break;
    case 0x312227:
      FUN_00568fb0(3);
      break;
    case 0x312228:
      FUN_00568fb0(1);
      break;
    case 0x312229:
      FUN_00568fb0(0);
      break;
    case 0x31222a:
      FUN_00568fb0(4);
      break;
    case 0x31222b:
      FUN_00568fb0(5);
      break;
    default:
      FUN_005dc7d0(param_1,param_2);
    }
  }
  return;
}

