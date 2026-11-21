// FUN_005f6510  005f6510

void __thiscall FUN_005f6510(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 0x4a),&param_2,3);
  if (iVar1 != 0) {
    if ((((char)param_2 == '\0') && (param_2._1_1_ == '\0')) && (param_2._2_1_ == '\0')) {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    *(undefined2 *)(param_1 + 0x4a) = (undefined2)param_2;
    *(char *)(param_1 + 0x4c) = param_2._2_1_;
    FUN_005f6b60();
  }
  return;
}

