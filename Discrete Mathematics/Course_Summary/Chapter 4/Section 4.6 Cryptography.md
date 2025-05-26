# 1. Basic Definitions

- **Plaintext Space ($P$)**: Set of all possible messages before encryption.
- **Ciphertext Space ($C$)**: Set of all possible encrypted messages.
- **Keyspace ($K$)**: Set of all possible keys.
- **Encryption Function**: $E_k: P \to C$, where $k \in K$.
- **Decryption Function**: $D_k: C \to P$, satisfying
  $$D_k\bigl(E_k(p)\bigr) = p, \quad \forall p \in P.$$  
- **Modular Arithmetic**: For integer $m$, define
  $$\mathbb{Z}_m = \{0,1,2,\dots,m-1\},$$
  with addition and multiplication taken modulo $m$.


<!-- File: 2_Caesar_Cipher.md -->


# 2. Caesar Cipher (Shift Cipher)

## Alphabet Encoding
Map letters $A\to0, B\to1,\dots,Z\to25$.

## Encryption (key $k=3$)
$$f(p) = (p + 3) \bmod 26, \quad p \in \mathbb{Z}_{26}.$$  

## Decryption
$$f^{-1}(c) = (c - 3) \bmod 26.$$  

## General Shift Cipher (key $k$)
- **Encryption**: $f_k(p) = (p + k) \bmod 26.$  
- **Decryption**: $f_k^{-1}(c) = (c - k) \bmod 26.$

**Example**: Encrypt “MEET” $(12,4,4,19)$ with $k=3$:
$$ (12+3,\;4+3,\;4+3,\;19+3) \bmod 26 = (15,7,7,22) \to \text{"PHHW"}. $$


<!-- File: 3_Affine_Cipher.md -->


# 3. Affine Cipher

## Encryption Function
$$f_{a,b}(p) = (a p + b) \bmod 26,$$
with integers $a,b$ and $\gcd(a,26)=1$ to ensure bijectivity.

## Decryption (Inverse)
1. Solve $c \equiv a p + b \;(\bmod\;26)$ for $p$.  
2. Compute $a^{-1}$ such that $a\,a^{-1}\equiv1\;(\bmod\;26)$.  
3. Recover
$$p \equiv a^{-1}(c - b) \bmod 26.$$  

**Example**: With $a=7,b=3$, encrypt $K$ $(p=10)$:
$$f(10) = (7\cdot10 + 3) \bmod 26 = 21 \to V.$$


<!-- File: 4_Cryptanalysis_Affine_Ciphers.md -->


# 4. Cryptanalysis of Affine Ciphers

Tools: letter frequency analysis.

**Procedure**:
1. Compute frequencies of letters in ciphertext.
2. Hypothesize most frequent cipher letter $c$ maps from plaintext letter $p_0$ (e.g., $E\equiv4$).
3. Solve
   $$c \equiv a\,p_0 + b \pmod{26}$$
   for $(a,b)$, then decrypt via $p \equiv a^{-1}(c - b) \bmod 26$.
4. If result is nonsensical, repeat with next common plaintext letter (T, A, O, …).


<!-- File: 5_Block_Transposition_Cipher.md -->


# 5. Block (Transposition) Cipher

- **Key**: Permutation $\sigma:\{1,2,\dots,m\}\to\{1,2,\dots,m\}$.  

## Encryption
1. Split plaintext into blocks $(p_1,p_2,\dots,p_m)$.  
2. Permute to ciphertext block $(c_1,\dots,c_m) = (p_{\sigma(1)},\dots,p_{\sigma(m)})$.

## Decryption
Apply inverse permutation $\sigma^{-1}$ to each ciphertext block.

**Example**: For $m=4$, $\sigma=(1\mapsto3,2\mapsto1,3\mapsto4,4\mapsto2)$,
``PIRA`` → apply $\sigma$ → ``IAPR``.


<!-- File: 6_Cryptosystem_Definition.md -->


# 6. Cryptosystems (Formal Definition)

A **cryptosystem** is a tuple $(P,C,K,E,D)$ where:
- $P$: Plaintext space.
- $C$: Ciphertext space.
- $K$: Keyspace.
- $E = \{E_k: k\in K\}$: Encryption functions.
- $D = \{D_k: k\in K\}$: Decryption functions, satisfying
  $$D_k\bigl(E_k(p)\bigr) = p, \quad \forall p\in P, k\in K.$$  

**Shift Cipher Cryptosystem**:
- $P=C=\mathbb{Z}_{26}^*$ (strings over $\mathbb{Z}_{26}$).
- $K=\mathbb{Z}_{26}$.
- $E_k(p)=(p+k)\bmod26,\quad D_k(c)=(c-k)\bmod26.$



# 7. Public Key Cryptography

- **Private-Key**: Single secret key for both encryption and decryption; requires secure key distribution.
- **Public-Key**: Two keys $(e,d)$:
  - $e$ (public) for encryption.
  - $d$ (private) for decryption.
- Security: Knowing $e$ does not feasibly reveal $d$.



# 8. The RSA Cryptosystem

## Key Generation
1. Choose distinct primes $p,q$.  
2. Compute $n=pq$ and $\varphi(n)=(p-1)(q-1)$.  
3. Select $e$ with $1<e<\varphi(n)$ and $\gcd(e,\varphi(n))=1$.  
4. Compute $d$ such that $$e\,d \equiv 1 \pmod{\varphi(n)}.$$  
5. Public key: $(n,e)$; Private key: $(n,d)$.

## Encryption
For block $m\in\mathbb{Z}_n$:
$$c \equiv m^e \pmod{n}.$$  

## Decryption
$$m \equiv c^d \pmod{n}.$$  

**Example** ($n=2537,e=13,p=43,q=59$):
- Encode “STOP” $	o$ blocks $1819,1415$.  
- Encrypt: $1819^{13}\bmod2537=2081$, $1415^{13}\bmod2537=2182$.  
- Decrypt ($d=937$): $2081^{937}\bmod2537=1819$, $2182^{937}\bmod2537=1415$.

