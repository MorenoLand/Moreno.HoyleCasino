// FUN_00685380  00685380

/* WARNING: Removing unreachable block (ram,0x006856e2) */
/* WARNING: Removing unreachable block (ram,0x006854de) */
/* WARNING: Removing unreachable block (ram,0x006853f1) */
/* WARNING: Removing unreachable block (ram,0x00685616) */
/* WARNING: Removing unreachable block (ram,0x00685909) */
/* WARNING: Removing unreachable block (ram,0x00685717) */

undefined4 FUN_00685380(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int extraout_EDX;
  uint extraout_EDX_00;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  int local_84;
  int local_80;
  undefined4 local_7c;
  uint local_74;
  uint local_6c;
  int local_68;
  uint local_58;
  int local_54;
  uint local_40;
  int local_3c;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  uint local_10;
  uint local_c;
  
  lVar19 = FUN_00684f70(param_1,0xffffffff);
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if ((-1 < param_3) && (CONCAT44(param_3,param_2) <= lVar19)) {
      iVar8 = *(int *)(param_1 + 0x34) + -1;
      lVar2 = lVar19;
      if (-1 < iVar8) {
        puVar9 = (uint *)(*(int *)(param_1 + 0x44) + 8 + iVar8 * 0x10);
        do {
          uVar16 = (uint)lVar19;
          iVar12 = ((int)((ulonglong)lVar19 >> 0x20) - puVar9[1]) - (uint)(uVar16 < *puVar9);
          lVar3 = lVar19 - *(longlong *)puVar9;
          lVar21 = lVar19 - *(longlong *)puVar9;
          lVar2 = lVar19 - *(longlong *)puVar9;
          lVar19 = lVar19 - *(longlong *)puVar9;
          if ((iVar12 < param_3) ||
             ((iVar12 <= param_3 && (lVar2 = lVar21, uVar16 - *puVar9 <= param_2)))) break;
          iVar8 = iVar8 + -1;
          puVar9 = puVar9 + -4;
          lVar2 = lVar3;
        } while (-1 < iVar8);
      }
      local_68 = (int)((ulonglong)lVar2 >> 0x20);
      local_6c = (uint)lVar2;
      iVar12 = *(int *)(param_1 + 0x38);
      iVar15 = *(int *)(iVar12 + 0xc + iVar8 * 8);
      uVar16 = *(uint *)(iVar12 + 8 + iVar8 * 8);
      iVar13 = *(int *)(iVar12 + 4 + iVar8 * 8);
      local_74 = *(uint *)(iVar12 + iVar8 * 8);
      lVar21 = CONCAT44(iVar13,local_74);
      puVar9 = (uint *)(iVar8 * 0x10 + *(int *)(param_1 + 0x44));
      uVar17 = *puVar9;
      iVar14 = puVar9[2] + uVar17;
      iVar10 = puVar9[3] + puVar9[1] + (uint)CARRY4(puVar9[2],uVar17);
      uVar11 = (uVar17 - local_6c) + param_2;
      iVar12 = ((puVar9[1] - local_68) - (uint)(uVar17 < local_6c)) + param_3 +
               (uint)CARRY4(uVar17 - local_6c,param_2);
      lVar19 = lVar21;
      if ((iVar13 <= iVar15) &&
         ((lVar3 = *(longlong *)puVar9, lVar6 = CONCAT44(iVar10,iVar14),
          lVar19 = CONCAT44(iVar13,local_74), lVar5 = CONCAT44(iVar15,uVar16), iVar13 < iVar15 ||
          (lVar3 = *(longlong *)puVar9, lVar6 = CONCAT44(iVar10,iVar14), lVar19 = lVar21,
          lVar5 = CONCAT44(iVar15,uVar16), local_74 < uVar16)))) {
        do {
          local_54 = (int)((ulonglong)lVar3 >> 0x20);
          local_58 = (uint)lVar3;
          lVar21 = lVar5 - CONCAT44(iVar13,local_74);
          iVar15 = iVar13;
          uVar16 = local_74;
          if (0x2133 < lVar21) {
            uVar20 = __allmul(uVar11 - local_58,(iVar12 - local_54) - (uint)(uVar11 < local_58),
                              lVar21);
            lVar21 = __alldiv(uVar20,lVar6 - lVar3);
            lVar21 = lVar21 + CONCAT44(iVar13,local_74);
            uVar17 = (uint)lVar21;
            uVar16 = uVar17 - 0x2134;
            iVar15 = (int)((ulonglong)lVar21 >> 0x20) - (uint)(uVar17 < 0x2134);
            if ((iVar15 <= iVar13) && ((iVar15 < iVar13 || (uVar16 <= local_74)))) {
              iVar15 = iVar13 + (uint)(0xfffffffe < local_74);
              uVar16 = local_74 + 1;
            }
          }
          FUN_00684990(param_1,uVar16,iVar15);
LAB_0068555a:
          local_80 = (int)((ulonglong)lVar5 >> 0x20);
          local_84 = (int)lVar5;
          lVar21 = FUN_006845f0(param_1,local_30,lVar5 - *(longlong *)(param_1 + 8));
          local_7c = (undefined4)lVar21;
          if (lVar21 == -0x80) goto LAB_0068593b;
          if ((lVar21 < 0x100000000) && (lVar21 < 0)) {
            iVar10 = iVar13 + (uint)(0xfffffffe < local_74);
            if ((iVar15 < iVar10) || ((iVar15 <= iVar10 && (uVar16 <= local_74 + 1)))) break;
            if (uVar16 == 0 && iVar15 == 0) goto LAB_0068593b;
            uVar17 = uVar16 - 0x2134;
            iVar15 = iVar15 + -1 + (uint)(0x2133 < uVar16);
            uVar16 = uVar17;
            lVar21 = lVar5;
            if ((iVar15 <= iVar13) && ((iVar15 < iVar13 || (uVar17 <= local_74)))) {
              iVar15 = iVar10;
              uVar16 = local_74 + 1;
            }
LAB_006856cb:
            FUN_00684990(param_1,uVar16,iVar15);
            lVar5 = lVar21;
LAB_006856d6:
            if (lVar5 <= CONCAT44(iVar13,local_74)) break;
            goto LAB_0068555a;
          }
          lVar22 = FUN_00686250(local_30);
          if (lVar22 == -1) goto LAB_006856d6;
          if (lVar22 < CONCAT44(iVar12,uVar11)) {
            uVar16 = *(uint *)(param_1 + 8);
            iVar13 = *(int *)(param_1 + 0xc);
            uVar17 = (uint)(uVar11 < (uint)lVar22);
            uVar1 = iVar12 - (int)((ulonglong)lVar22 >> 0x20);
            bVar18 = -1 < (int)(uVar1 - uVar17);
            local_74 = uVar16;
            lVar3 = lVar22;
            lVar4 = lVar6;
            lVar19 = lVar21;
            if ((uVar1 != uVar17 && bVar18) ||
               ((iVar15 = iVar13, bVar18 && (0xac44 < uVar11 - (uint)lVar22)))) goto LAB_0068570b;
            goto LAB_006856d6;
          }
          local_40 = local_74 + 1;
          local_3c = iVar13 + (uint)(0xfffffffe < local_74);
          if ((iVar15 < local_3c) || ((iVar15 <= local_3c && (uVar16 <= local_40)))) break;
          lVar4 = lVar22;
          lVar5 = lVar21;
          if ((local_84 == *(int *)(param_1 + 8)) && (local_80 == *(int *)(param_1 + 0xc))) {
            uVar17 = uVar16 - 0x2134;
            iVar15 = iVar15 + -1 + (uint)(0x2133 < uVar16);
            uVar16 = uVar17;
            if ((iVar15 <= iVar13) && ((iVar15 < iVar13 || (uVar17 <= local_74)))) {
              iVar15 = local_3c;
              uVar16 = local_40;
            }
            goto LAB_006856cb;
          }
LAB_0068570b:
          lVar6 = lVar4;
        } while (CONCAT44(iVar13,local_74) < lVar5);
      }
      FUN_00684990(param_1,lVar19);
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_006845f0(param_1,&local_40,0xffffffff,0xffffffff);
      if ((extraout_EDX < 1) && (extraout_EDX < 0)) {
        return 0xfffffffe;
      }
      if (iVar8 == *(int *)(param_1 + 0x60)) {
        FUN_00691550(param_1 + 0x1e0);
      }
      else {
        FUN_00684f40(param_1);
        *(int *)(param_1 + 0x60) = iVar8;
        uVar7 = FUN_006862e0(&local_40);
        *(undefined4 *)(param_1 + 0x5c) = uVar7;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      iVar8 = param_1 + 0x78;
      FUN_00686aa0(iVar8,*(undefined4 *)(param_1 + 0x5c));
      FUN_00686760(iVar8,&local_40);
      do {
        iVar12 = FUN_00686c10(iVar8,local_20);
        if (iVar12 == 0) {
          FUN_00684990(param_1,lVar19);
          while( true ) {
            lVar19 = FUN_00684870(param_1,&local_40);
            local_7c = (undefined4)lVar19;
            if (lVar19 < 0) break;
            FUN_00686250(&local_40);
            if ((extraout_EDX_00 < 0x80000000) || (iVar8 = FUN_00686220(&local_40), iVar8 == 0)) {
              uVar7 = FUN_00685070(param_1,lVar19);
              return uVar7;
            }
            *(longlong *)(param_1 + 8) = lVar19;
          }
LAB_0068593b:
          *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
          FUN_00684f40(param_1);
          return local_7c;
        }
        if (iVar12 >> 0x1f < 0) {
          local_7c = 0xffffff78;
          goto LAB_0068593b;
        }
        if ((local_10 & local_c) != 0xffffffff) {
          iVar8 = *(int *)(param_1 + 0x60) * 0x10;
          puVar9 = (uint *)(iVar8 + *(int *)(param_1 + 0x44));
          uVar16 = *puVar9;
          iVar8 = *(int *)(iVar8 + 4 + *(int *)(param_1 + 0x44));
          *(uint *)(param_1 + 0x50) = local_10 - *puVar9;
          iVar8 = (local_c - iVar8) - (uint)(local_10 < uVar16);
          *(int *)(param_1 + 0x54) = iVar8;
          if ((iVar8 < 1) && (iVar8 < 0)) {
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
          lVar2 = lVar2 + *(longlong *)(param_1 + 0x50);
          iVar8 = (int)((ulonglong)lVar2 >> 0x20);
          *(longlong *)(param_1 + 0x50) = lVar2;
          if ((iVar8 <= param_3) &&
             (((iVar8 < param_3 || (*(uint *)(param_1 + 0x50) <= param_2)) &&
              (lVar19 = FUN_00684f70(param_1,0xffffffff), CONCAT44(param_3,param_2) <= lVar19)))) {
            *(undefined4 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(undefined4 *)(param_1 + 0x70) = 0;
            *(undefined4 *)(param_1 + 0x74) = 0;
            return 0;
          }
          local_7c = 0xffffff7f;
          goto LAB_0068593b;
        }
        FUN_00686ac0(iVar8,0);
      } while( true );
    }
  }
  return 0xffffff7d;
}

