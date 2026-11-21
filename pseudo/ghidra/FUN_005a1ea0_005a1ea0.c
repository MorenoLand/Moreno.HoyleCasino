// FUN_005a1ea0  005a1ea0

undefined4 __thiscall FUN_005a1ea0(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_005dcb00(param_2);
  uVar5 = FUN_0063aac0();
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (*(int *)uVar5 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    iVar4 = *piVar3;
    if (iVar4 != 3) {
      bVar1 = false;
      goto LAB_005a1eee;
    }
  }
  bVar1 = true;
LAB_005a1eee:
  if ((bVar1) &&
     (cVar2 = FUN_005a2a40(param_2,CONCAT31((int3)((uint)iVar4 >> 8),param_3),param_4),
     cVar2 != '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + param_2 + 0xfb) = param_3;
  if ((*(char *)(param_1 + param_2 + 0xfb) == '\0') &&
     (cVar2 = FUN_005a3690(param_2), cVar2 != '\0')) {
    FUN_005a4390(param_2,3,0,0);
  }
  *(undefined1 *)(param_1 + param_2 + 0xff) = param_4;
  if ((*(char *)(param_1 + param_2 + 0xff) == '\0') &&
     (cVar2 = FUN_005a3630(param_2), cVar2 != '\0')) {
    FUN_005a4390(param_2,3,0,0);
  }
  FUN_005a3c20(param_2,0);
  FUN_005a3b20(param_2,1);
  return 1;
}

