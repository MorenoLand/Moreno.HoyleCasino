// FUN_005c81f0  005c81f0

void __fastcall FUN_005c81f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005d8230();
  if ((*(int *)(param_1 + 0x80) != 0) && (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x80))(1);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = FUN_005c2200(*(undefined4 *)(DAT_007947e0 + 0x4f14));
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = FUN_005c6d50(*(undefined4 *)(DAT_007947e0 + 0x4f14));
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = FUN_005bc720(*(undefined4 *)(DAT_007947e0 + 0x4f14));
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 4))(*(undefined4 *)(DAT_007947e0 + 0x4f14));
  }
  cVar1 = FUN_005df700(0xffffffff);
  if (cVar1 == '\0') {
    FUN_0057ae30();
  }
  else {
    FUN_0057ab80(5,&DAT_0075a3c8);
  }
  return;
}

