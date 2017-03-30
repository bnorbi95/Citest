pipeline{
  agent any
  stage('Checkout'){
    checkout scm
  }
  stage('Build'){
    sh 'gcc -o main main.c'
  }
  stage('Run'){
    sh './main'
  }
}
