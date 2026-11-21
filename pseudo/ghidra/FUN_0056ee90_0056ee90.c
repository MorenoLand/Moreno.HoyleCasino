// FUN_0056ee90  0056ee90

void __fastcall FUN_0056ee90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0062fbf0(10);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = FUN_0062fbf0(10);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  cVar1 = FUN_0056f130(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
  if (cVar1 == '\0') {
    uVar2 = FUN_0062fbf0(10);
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
  }
  else {
    uVar2 = FUN_0062fbf0(9);
    *(undefined4 *)(param_1 + 0xb4) = uVar2;
    if (0 < *(int *)(param_1 + 0xb4)) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
  }
  cVar1 = FUN_0056f130(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_0056f130(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb4)),
     cVar1 == '\0')) {
    uVar2 = FUN_0062fbf0(10);
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
  }
  else {
    uVar2 = FUN_0062fbf0(8);
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0xb4)) {
      if ((0 < *(int *)(param_1 + 0xb8)) &&
         (*(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1,
         *(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0xb8))) {
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      if (0 < *(int *)(param_1 + 0xb8)) {
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      }
    }
  }
  return;
}

