#include <iostream>
#include <unistd.h>
#include "AirTester.h"

extern "C" {
#include "ft_printf.h"
}

TEST(mandatory_tests, no_arg) {
	EXPECT_SAME_STDOUT(std::printf(""), ft_printf(""));
	EXPECT_SAME_STDOUT(std::printf(" "), ft_printf(" "));
	EXPECT_SAME_STDOUT(std::printf("H"), ft_printf("H"));
	EXPECT_SAME_STDOUT(std::printf("Hello"), ft_printf("Hello"));
	EXPECT_SAME_STDOUT(std::printf("Hello world!"), ft_printf("Hello world!"));
	EXPECT_SAME_STDOUT(
			std::printf("aC555.9i/6\"+\"_+|t3Pb&`N43}OBs)rR1YF3p|+)P~;^)AjPtCVF{3JT.4.O=w.ro\"')QM.>fdL&]3OVF{3rSsY*{lka[Wtjx)\"A>Lzhak\"W6ovf=L)ZNLia5ut^w82aqnPMLgov}6-1mvLI3VCT40Aov;VV_$<Zx7,5J#?m*k,HYgT]n5.,'JPNJ;|5AolBq-_W!\"9~tp]Rl9V;B(@n`h3y&aFBu:[uNx?EzAsE=N,*jdT8wPUt|JwykoyB?[C,gG4IL~k`DgmAbN\",Iq}Fpgh*9Q~VUPMy4[L@#[-88bZ^P#j#LKNgdkB}]*!,~'`r[Y/^Ei|7B\"Ml65i^kDY0N>S];Z;dz/_[5_.e1!pDw;W1snA,aEk`|]8Ou1s}fB5V^MLak!a<B|h#!Q&84S55#SycHL0t\".yI]iRj?mI]6/DLs@R-]==`R[[kV05YI[mA/'|c5:Qsu]=u5ye1RaNc'.mJl5Jz-xykQ/=MY6evr(lK&RJ@J&7iB(BSIBzB*[tHt'!D\")F.38LSkYw:xC|RPXomirlR9u;t'2ffV+$j|p*YC$Bag0[Fh8xgEuf/AHWe}M?{}Vs+62hWa44nYbQyPCe)1<+rI=r`\"-#^_1KKXwid`15wg,oyn<xEQr9@#2^3um-\"H):){]f>t\"@sUf8f7Jo?Or)ASWlraUe:P4,LoRDqzXw4H2eQ,hO~d5}Q_VH\"'^=MP8W5u^wF/iKFfCTirlWWz+Y0R#q8@)*[Icta}!l:{3yp/K~]71ad*C!ZKr2Fb8x~FetLPD}`NsWv+kR8T,*WNm7G#~(R5QwAJ;z>([B?\"n5d_BWTf[<<Tg9ANBm\"ct[-(.w7\"L0z>S`Ti\"`&p;6}Ip!_6K_~]+SJ#Onv_{Yw?sl2yr+YHf7//#+G(.|)Fsb?^P>D|dhhr&L'<k2l5HK5Hs>;s27w`G2>vjZ4vjlO9r`1sRM:AI6Os~c.LkR@~].</4n'E^Cb&5myM;w?bgM'si<j'/cbV8uGD'&e=`_#`9BTUgunQ(ank0BP{cI;v\"D+b5zN}p:/HM0*NB*^XOwR@I*_1XW=&arI@A{^af;8Q_*KRP4H>\",./&2VhC(t_FuWe`A>WVh7AqiM$7|Bb,86xtcL-t;*v&.Xa)uys$>z3$ua|f&6#1y;8US:mg!J^8q5hYfN?S*$C;;20rdl]>o)X!0qEMgQP6bDgt~L#P{n&TRg2v?!0y72X3K:.qh>}d99aUQq;#U:$+7wvp,vp1WbXIbIBgEy.Yq[~H,?RM@3SNC;_^\"!Yvx$)X}dnRl5BXu=NOOk@eQ(Q;LBhI?1f>Y2m~tu'^;DL&yYy,:e;g-nl;L]?cFG}Sd|rPfU(QF,Y8`9m~$qj~-4JhJx$|1UR'm#U^.+ApnjeNFitmT&mB[N\"-T:n(<tSxyfe+pJ-tx$.hNIC]A'b0udNzX97?T\"irv:Z~.32hs=,@!e#NUnm,)B}/r[]4}.W?FLc+F1r?IRyrPe5$A@&o\"N|euC|jVj<SwHy{3|'BH.K)=KkT[<Bj*q?#CoHLP}F7-/W_{ZP@&Xa6nEVe&t@UA~!=MB9JbI07StTq;!h<F@@V0<-sYr#cd?qHTI$+53-T~!:Im6G!GR5?.@P#S8jN8OS|L,~UOLLomeT$h;/iOL9QAEmT0{W]xOqs@]|a>,$^;02BFqFYie1GABjb\"GK60*:g4FUUSq11Pm&ea;(>U)Cw);A9'yFXa3ROh?xRB6UQl6CYnCFr@&(_{5P@_{^<uNVF^)hk>ca/vd5cr?0jaOtd&2|o-0MHQ@9C<nO!;HHw_)~g2<Gl,o!n!VWx3fbAQv{_K:DqT'lS`r_wB*yu/HM:-i91'40sH2C*}#Nw6};*K;|@~\"jZySzUm(ynfV84/Mbf)#o=J_BAlBc2yI+Vqh#O,TjhMO&A1?5u<YY@[^L!0vP7MB,JW3mG|8i**yZsgU3MH/&qe96hd'.z1q>5F}tvB:(*/i:neOHAa)7JHoXtD)RhFD1S8fVYLP{M<dUJd]^mxnoQwH*NgdJ0:t\"3:vQ)<YB;$e<Fbt@~nO<`&H*k2#5jK\"Vi2e76j=o0rMRXi@>hEW#v{ep7I$3jGsJ71w#nFU&)n5THK_'l+rmaysJ1hPyH$wi72B}3OC,|x9u5U;O(UBX|^^uK7Z(|&$/Yy@!28i0kFA5Kn(pOR{p=8w?>1-nzdQFz11Quu\"=amur,_]cA'JFxaq'Td0bn/{94AZ)V1W-n`q!gyz8jST4||IYX94Pi!7YP7KSk-o()D]!&@=)@A&G<'g0]=^u'EzBF4DA^wkUwK9Oo?mA_$L#:KXUa*x#q=.hx:dO{Q=(YWJ>o\"+3f35SDlF.ZN_CkG_{fyr4LR0Si21iWkRzYg?T6KeBil2LC^<5080IFKuI.n7m$as`k[T}-3r?LOqM?GW2v\"`}'Wb.=z9*Qe~bqD5<e@e--.cVIcL[ZbfN=@f^dU|.S9p8!?h?RwVyP0UO_H>zT*_c>w~)rD}_jiT54U<iE|(}S>Nqiq*SUhV`J6(hZU*f'KbMK&d:m}IlB-^=1S>{`||d.1KXT/xkq/Z4O7N,J&m}3NL9\"?sC?aRDn}'D7kL4h@chEJ~#)sse9opb8ofO03-g;frrxS?mi&^wQI1(v[Ma,eKYR|_Jmv]7Hwt~/zX>^T]),phRBd>Zb,J^L[6TV4SSLd:VZ_/!81wtC=H9pxZ!~)xdtwj|}qNr+I>''*r'Y8&jN|@rY?gM];y&0x7R$p]d5h8)MCSPUb!6l7G\"|;WXo:(,,+iRa#pxa3Ow4-j0o-IHEajY#,yL'8DS|#'v.&c72?jKFw<sIbv+?rfeQqs!.sn>vPwp=33.fhLl@s^08F$3.w.~&FUhDF1j_@WRZpYVKglRJElY}e.aGvRG=+aEtmgJw-m1'4Y^<uRn#!_`)dE-#|ClCxA,$miHg:Cl=dP[V[2n`Py<@'O4d=fr#1nnJTzZ'6-V~F<~PwH>h;JTaQ]Gm;0)6_Sr(ZLpdD'4!=6GAA5~Ru7R&fdM0[~nG$Ix8jlf+bBv_Jv&:6N&vGi(LWf0B{PRz,wF/j:u_jK}_[1*HOGMRIH~;9ya8*QZ@[t/P.,nFI6@]~DB+y/E[VrdJP*t9+lVxI{$4{YD2~f)[f0)rZDZ*K@}X@A_>iN=:LX2r?G$X!Y@2`to#.A-wZ7(SO*`g-RKH)v~DE+[m(JV>)1tUDO/pJtD01tFBq~'Z'c]^u@P4c5u;2-[=,7F?^3+^_0]/K@.X|!.Zfk&cT&&+oCP^mRZX5*-Y-:;|Vpg+0gS\"X}n[hiT.EZSEWB\".>>E\"a'^+VzgiU3/yue(5gEA;uMGSQAU/,T<j&yt=IdOalTO2<^d\"25>!ZXNv{E&vRQ{>Cvl^;24mm1nvfn@?*n^@V*K~*wi(zpQQml=_3g;RV@'@(kTiTNUWMiWjuL5D+^yC4fT,|EW;xoZ26tQ'Z7w|y=dZPr5'TCYtT\"&huGwUq>TdlP&\"Fpy7]OyIjpQh.a[M!{f1OL&#Gzo#V(8T[3&?55cG+?YAaIqz5SY7sL7+T]#~g9i*t]A.RnWyRi^V'n}#Zny/)$UJBW6gb:k_4YXs3okF!L]2rqhF!s2^wP9q\"n._wCh9^F<r6w<YM=&$_88II0O5vOyS.*(.s']:}c6Ju/^uAJe/p?l>Js?4LM\"5sl7;w4)V\"^pjp?\"mdDv7WlZ`W9x)a5qg0uhgz8408Bg5eVsH6H).JF<,=*NBV\"775g:YxSXLWbH/m=}?:(GB9E}n[!j^j3{a:7?-5m3tFza:W.{WC8d|aDx7U'2xzy4Vi3s|CRcgYjBc*`2Y;Q[6O1x,S(2&~[gw(-gDs1]1:9O`wIBqx&2?T$u!J45&*fn2pLABg$57)J;JX`zbZX,EA'0nUp;'\"iutxT/jbucD<C_o65`4PqM+A#,JMl8ZTvv.]c|[|6p(\"h,c|Ym_c)B)uB[qqclN]E$;cY@|-;f(-eV.1bfaoAb'&Q`k)Zjopf#+JE}#;\"_A;=*A<;JJ+o{2Wa,2n)GX{t4k0,@rhrMSV*tT{VH[PMB`xO}DxfAxI'w'\"80t_8LSdSZ-q!Cc8sZH;Q|CYI9lVRUbo>D0Ay0P<:_1BB`Y'7"),
			ft_printf("aC555.9i/6\"+\"_+|t3Pb&`N43}OBs)rR1YF3p|+)P~;^)AjPtCVF{3JT.4.O=w.ro\"')QM.>fdL&]3OVF{3rSsY*{lka[Wtjx)\"A>Lzhak\"W6ovf=L)ZNLia5ut^w82aqnPMLgov}6-1mvLI3VCT40Aov;VV_$<Zx7,5J#?m*k,HYgT]n5.,'JPNJ;|5AolBq-_W!\"9~tp]Rl9V;B(@n`h3y&aFBu:[uNx?EzAsE=N,*jdT8wPUt|JwykoyB?[C,gG4IL~k`DgmAbN\",Iq}Fpgh*9Q~VUPMy4[L@#[-88bZ^P#j#LKNgdkB}]*!,~'`r[Y/^Ei|7B\"Ml65i^kDY0N>S];Z;dz/_[5_.e1!pDw;W1snA,aEk`|]8Ou1s}fB5V^MLak!a<B|h#!Q&84S55#SycHL0t\".yI]iRj?mI]6/DLs@R-]==`R[[kV05YI[mA/'|c5:Qsu]=u5ye1RaNc'.mJl5Jz-xykQ/=MY6evr(lK&RJ@J&7iB(BSIBzB*[tHt'!D\")F.38LSkYw:xC|RPXomirlR9u;t'2ffV+$j|p*YC$Bag0[Fh8xgEuf/AHWe}M?{}Vs+62hWa44nYbQyPCe)1<+rI=r`\"-#^_1KKXwid`15wg,oyn<xEQr9@#2^3um-\"H):){]f>t\"@sUf8f7Jo?Or)ASWlraUe:P4,LoRDqzXw4H2eQ,hO~d5}Q_VH\"'^=MP8W5u^wF/iKFfCTirlWWz+Y0R#q8@)*[Icta}!l:{3yp/K~]71ad*C!ZKr2Fb8x~FetLPD}`NsWv+kR8T,*WNm7G#~(R5QwAJ;z>([B?\"n5d_BWTf[<<Tg9ANBm\"ct[-(.w7\"L0z>S`Ti\"`&p;6}Ip!_6K_~]+SJ#Onv_{Yw?sl2yr+YHf7//#+G(.|)Fsb?^P>D|dhhr&L'<k2l5HK5Hs>;s27w`G2>vjZ4vjlO9r`1sRM:AI6Os~c.LkR@~].</4n'E^Cb&5myM;w?bgM'si<j'/cbV8uGD'&e=`_#`9BTUgunQ(ank0BP{cI;v\"D+b5zN}p:/HM0*NB*^XOwR@I*_1XW=&arI@A{^af;8Q_*KRP4H>\",./&2VhC(t_FuWe`A>WVh7AqiM$7|Bb,86xtcL-t;*v&.Xa)uys$>z3$ua|f&6#1y;8US:mg!J^8q5hYfN?S*$C;;20rdl]>o)X!0qEMgQP6bDgt~L#P{n&TRg2v?!0y72X3K:.qh>}d99aUQq;#U:$+7wvp,vp1WbXIbIBgEy.Yq[~H,?RM@3SNC;_^\"!Yvx$)X}dnRl5BXu=NOOk@eQ(Q;LBhI?1f>Y2m~tu'^;DL&yYy,:e;g-nl;L]?cFG}Sd|rPfU(QF,Y8`9m~$qj~-4JhJx$|1UR'm#U^.+ApnjeNFitmT&mB[N\"-T:n(<tSxyfe+pJ-tx$.hNIC]A'b0udNzX97?T\"irv:Z~.32hs=,@!e#NUnm,)B}/r[]4}.W?FLc+F1r?IRyrPe5$A@&o\"N|euC|jVj<SwHy{3|'BH.K)=KkT[<Bj*q?#CoHLP}F7-/W_{ZP@&Xa6nEVe&t@UA~!=MB9JbI07StTq;!h<F@@V0<-sYr#cd?qHTI$+53-T~!:Im6G!GR5?.@P#S8jN8OS|L,~UOLLomeT$h;/iOL9QAEmT0{W]xOqs@]|a>,$^;02BFqFYie1GABjb\"GK60*:g4FUUSq11Pm&ea;(>U)Cw);A9'yFXa3ROh?xRB6UQl6CYnCFr@&(_{5P@_{^<uNVF^)hk>ca/vd5cr?0jaOtd&2|o-0MHQ@9C<nO!;HHw_)~g2<Gl,o!n!VWx3fbAQv{_K:DqT'lS`r_wB*yu/HM:-i91'40sH2C*}#Nw6};*K;|@~\"jZySzUm(ynfV84/Mbf)#o=J_BAlBc2yI+Vqh#O,TjhMO&A1?5u<YY@[^L!0vP7MB,JW3mG|8i**yZsgU3MH/&qe96hd'.z1q>5F}tvB:(*/i:neOHAa)7JHoXtD)RhFD1S8fVYLP{M<dUJd]^mxnoQwH*NgdJ0:t\"3:vQ)<YB;$e<Fbt@~nO<`&H*k2#5jK\"Vi2e76j=o0rMRXi@>hEW#v{ep7I$3jGsJ71w#nFU&)n5THK_'l+rmaysJ1hPyH$wi72B}3OC,|x9u5U;O(UBX|^^uK7Z(|&$/Yy@!28i0kFA5Kn(pOR{p=8w?>1-nzdQFz11Quu\"=amur,_]cA'JFxaq'Td0bn/{94AZ)V1W-n`q!gyz8jST4||IYX94Pi!7YP7KSk-o()D]!&@=)@A&G<'g0]=^u'EzBF4DA^wkUwK9Oo?mA_$L#:KXUa*x#q=.hx:dO{Q=(YWJ>o\"+3f35SDlF.ZN_CkG_{fyr4LR0Si21iWkRzYg?T6KeBil2LC^<5080IFKuI.n7m$as`k[T}-3r?LOqM?GW2v\"`}'Wb.=z9*Qe~bqD5<e@e--.cVIcL[ZbfN=@f^dU|.S9p8!?h?RwVyP0UO_H>zT*_c>w~)rD}_jiT54U<iE|(}S>Nqiq*SUhV`J6(hZU*f'KbMK&d:m}IlB-^=1S>{`||d.1KXT/xkq/Z4O7N,J&m}3NL9\"?sC?aRDn}'D7kL4h@chEJ~#)sse9opb8ofO03-g;frrxS?mi&^wQI1(v[Ma,eKYR|_Jmv]7Hwt~/zX>^T]),phRBd>Zb,J^L[6TV4SSLd:VZ_/!81wtC=H9pxZ!~)xdtwj|}qNr+I>''*r'Y8&jN|@rY?gM];y&0x7R$p]d5h8)MCSPUb!6l7G\"|;WXo:(,,+iRa#pxa3Ow4-j0o-IHEajY#,yL'8DS|#'v.&c72?jKFw<sIbv+?rfeQqs!.sn>vPwp=33.fhLl@s^08F$3.w.~&FUhDF1j_@WRZpYVKglRJElY}e.aGvRG=+aEtmgJw-m1'4Y^<uRn#!_`)dE-#|ClCxA,$miHg:Cl=dP[V[2n`Py<@'O4d=fr#1nnJTzZ'6-V~F<~PwH>h;JTaQ]Gm;0)6_Sr(ZLpdD'4!=6GAA5~Ru7R&fdM0[~nG$Ix8jlf+bBv_Jv&:6N&vGi(LWf0B{PRz,wF/j:u_jK}_[1*HOGMRIH~;9ya8*QZ@[t/P.,nFI6@]~DB+y/E[VrdJP*t9+lVxI{$4{YD2~f)[f0)rZDZ*K@}X@A_>iN=:LX2r?G$X!Y@2`to#.A-wZ7(SO*`g-RKH)v~DE+[m(JV>)1tUDO/pJtD01tFBq~'Z'c]^u@P4c5u;2-[=,7F?^3+^_0]/K@.X|!.Zfk&cT&&+oCP^mRZX5*-Y-:;|Vpg+0gS\"X}n[hiT.EZSEWB\".>>E\"a'^+VzgiU3/yue(5gEA;uMGSQAU/,T<j&yt=IdOalTO2<^d\"25>!ZXNv{E&vRQ{>Cvl^;24mm1nvfn@?*n^@V*K~*wi(zpQQml=_3g;RV@'@(kTiTNUWMiWjuL5D+^yC4fT,|EW;xoZ26tQ'Z7w|y=dZPr5'TCYtT\"&huGwUq>TdlP&\"Fpy7]OyIjpQh.a[M!{f1OL&#Gzo#V(8T[3&?55cG+?YAaIqz5SY7sL7+T]#~g9i*t]A.RnWyRi^V'n}#Zny/)$UJBW6gb:k_4YXs3okF!L]2rqhF!s2^wP9q\"n._wCh9^F<r6w<YM=&$_88II0O5vOyS.*(.s']:}c6Ju/^uAJe/p?l>Js?4LM\"5sl7;w4)V\"^pjp?\"mdDv7WlZ`W9x)a5qg0uhgz8408Bg5eVsH6H).JF<,=*NBV\"775g:YxSXLWbH/m=}?:(GB9E}n[!j^j3{a:7?-5m3tFza:W.{WC8d|aDx7U'2xzy4Vi3s|CRcgYjBc*`2Y;Q[6O1x,S(2&~[gw(-gDs1]1:9O`wIBqx&2?T$u!J45&*fn2pLABg$57)J;JX`zbZX,EA'0nUp;'\"iutxT/jbucD<C_o65`4PqM+A#,JMl8ZTvv.]c|[|6p(\"h,c|Ym_c)B)uB[qqclN]E$;cY@|-;f(-eV.1bfaoAb'&Q`k)Zjopf#+JE}#;\"_A;=*A<;JJ+o{2Wa,2n)GX{t4k0,@rhrMSV*tT{VH[PMB`xO}DxfAxI'w'\"80t_8LSdSZ-q!Cc8sZH;Q|CYI9lVRUbo>D0Ay0P<:_1BB`Y'7"))
}

TEST(mandatory_tests, character) {
	EXPECT_SAME_STDOUT(std::printf("%c", 'c'), ft_printf("%c", 'c'));
	EXPECT_SAME_STDOUT(std::printf("%c", '\0'), ft_printf("%c", '\0'));

	EXPECT_SAME_STDOUT(std::printf("Hello! This is %c", 'a'), ft_printf("Hello! This is %c", 'a'));
	EXPECT_SAME_STDOUT(std::printf("Hell%c! This is a", 'o'), ft_printf("Hell%c! This is a", 'o'));
	EXPECT_SAME_STDOUT(std::printf("%cello! This is a", 'H'), ft_printf("%cello! This is a", 'H'));
	EXPECT_SAME_STDOUT(
			std::printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'),
			ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'));
}

TEST(bonus_tests, character) {
	EXPECT_SAME_STDOUT(std::printf("%5c", 'c'), ft_printf("%5c", 'c'));
	EXPECT_SAME_STDOUT(std::printf("%42c", '\0'), ft_printf("%42c", '\0'));

	EXPECT_SAME_STDOUT(std::printf("Hello! This is %32c", 'a'), ft_printf("Hello! This is %32c", 'a'));
	EXPECT_SAME_STDOUT(std::printf("Hell%21c! This is a", 'o'), ft_printf("Hell%21c! This is a", 'o'));
	EXPECT_SAME_STDOUT(std::printf("%1cello! This is a", 'H'), ft_printf("%1cello! This is a", 'H'));
	EXPECT_SAME_STDOUT(
						  std::printf("%1c%2c%3c%4c%5c%6c%7c%8c%9c%10c%11c%12c%13c%14c%15c%16c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'),
		ft_printf("%1c%2c%3c%4c%5c%6c%7c%8c%9c%10c%11c%12c%13c%14c%15c%16c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'));

	EXPECT_SAME_STDOUT(std::printf("%-5c", 'c'), ft_printf("%-5c", 'c'));
	EXPECT_SAME_STDOUT(std::printf("%-42c", '\0'), ft_printf("%-42c", '\0'));

	EXPECT_SAME_STDOUT(std::printf("Hello! This is %-32c", 'a'), ft_printf("Hello! This is %-32c", 'a'));
	EXPECT_SAME_STDOUT(std::printf("Hell%-21c! This is a", 'o'), ft_printf("Hell%-21c! This is a", 'o'));
	EXPECT_SAME_STDOUT(std::printf("%-1cello! This is a", 'H'), ft_printf("%-1cello! This is a", 'H'));
	EXPECT_SAME_STDOUT(
						  std::printf("%-1c%-2c%-3c%-4c%-5c%6c%-7c%-8c%-9c%-10c%-11c%-12c%-13c%-14c%-15c%-16c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'),
		ft_printf("%-1c%-2c%-3c%-4c%-5c%6c%-7c%-8c%-9c%-10c%-11c%-12c%-13c%-14c%-15c%-16c", 'H', 'e', 'l', 'l', 'o', '!', ' ', 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a'));
}

TEST(mandatory_tests, string) {
	EXPECT_SAME_STDOUT(std::printf("Hello %s", "world!"), ft_printf("Hello %s", "world!"));
	EXPECT_SAME_STDOUT(std::printf("%s world!", "Hello"), ft_printf("%s world!", "Hello"));
	EXPECT_SAME_STDOUT(std::printf("%s %s", "Hello", "world!"), ft_printf("%s %s", "Hello", "world!"));
	EXPECT_SAME_STDOUT(std::printf("%s%c%s", "Hello", ' ', "world!"), ft_printf("%s%c%s", "Hello", ' ', "world!"));

	EXPECT_SAME_STDOUT(std::printf("%s %s", "", ""), ft_printf("%s %s", "", ""));
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	RUN_ALL_TESTS();
	return (0);
}