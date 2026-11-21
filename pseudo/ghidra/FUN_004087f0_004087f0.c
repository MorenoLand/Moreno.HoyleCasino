// FUN_004087f0  004087f0

undefined4 FUN_004087f0(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  
  cVar2 = FUN_00408790();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    do {
      uVar3 = FUN_0062fc30(0,3);
      FUN_005dcb00(uVar3);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    } while (bVar1);
  }
  return uVar3;
}

