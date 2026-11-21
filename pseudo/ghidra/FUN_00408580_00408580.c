// FUN_00408580  00408580

void FUN_00408580(int param_1)

{
  MultiWaitBlockHolder *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint local_14;
  
  iVar3 = FUN_004091b0();
  iVar4 = FUN_004091d0();
  this = (MultiWaitBlockHolder *)(DAT_007902f0 + 0xbc + param_1 * 0x338);
  FUN_005dcb00(param_1);
  piVar5 = (int *)FUN_0063aac0();
  if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    FUN_005e9f20("player->IsHuman()","..\\Casino\\baccaratstate.cpp",0x1fe);
  }
  cVar2 = FUN_00408a20(param_1);
  if (cVar2 == '\0') {
    if (iVar4 < iVar3) {
      local_14 = 2;
      FUN_004074f0();
      cVar2 = FUN_004089c0(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00408870(param_1);
        if (cVar2 != '\0') {
          Concurrency::details::MultiWaitBlockHolder::Release(this);
        }
      }
      else {
        FUN_00407570();
        local_14 = 0x12;
      }
    }
    else if (iVar3 < iVar4) {
      local_14 = 1;
      FUN_00407520();
      cVar2 = FUN_00408990(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00408870(param_1);
        if (cVar2 != '\0') {
          Concurrency::details::MultiWaitBlockHolder::Release(this);
        }
      }
      else {
        FUN_00407570();
        local_14 = 0x11;
      }
    }
    else {
      local_14 = 4;
      FUN_00407550();
      cVar2 = FUN_004089f0(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00408870(param_1);
        if (cVar2 != '\0') {
          Concurrency::details::MultiWaitBlockHolder::Release(this);
        }
      }
      else {
        FUN_00407570();
        local_14 = 0x14;
      }
    }
    cVar2 = FUN_00408870(param_1);
    if (cVar2 == '\0') {
      local_14 = local_14 | 8;
    }
    else {
      FUN_004075b0();
    }
    FUN_004075d0(local_14);
    Concurrency::details::WorkSearchContext::Bias((WorkSearchContext *)this);
  }
  return;
}

